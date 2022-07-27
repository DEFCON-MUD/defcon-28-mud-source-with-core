inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 46, 9 }));
  set_short( "Passage - x49y46z9" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y47z9.c",
  "south" : DIR+"/rooms/x49y45z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
