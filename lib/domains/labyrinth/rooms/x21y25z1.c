inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 25, 1 }));
  set_short( "Hallway - x21y25z1" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y26z1.c",
  "south" : DIR+"/rooms/x21y24z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
