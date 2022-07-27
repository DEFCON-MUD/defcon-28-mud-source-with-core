inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 35, 6 }));
  set_short( "Passage - x55y35z6" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y36z6.c",
  "south" : DIR+"/rooms/x55y34z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
