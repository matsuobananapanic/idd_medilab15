uniform vec2 u_resolution; // 画面の解像度(width,height)
uniform float u_time;      // 起動してからの経過時間(秒)
uniform float u_freq[20];

void main() {
    //画面の解像度から、0.0〜1.0に正規化する
    vec4 color;
    for (int i = 0; i < 10; i++){
        vec2 st = gl_FragCoord.xy / u_resolution;
        st.y = st.y - 0.5;
        st.y += sin(st.x * 2.0 * u_freq[i] + u_time * 10.0) * 0.2 * sin(u_time * u_freq[i] * 0.1);
        st.y = 1.0 - pow(abs(st.y), 0.2);
        st.y *= 0.3;
        color += vec4(st.y * 0.1, st.y * 0.5, st.y * 1.0, 1.0);
    }
    gl_FragColor = color;
}