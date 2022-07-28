inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 60, 6 }));
  set_short( "Hallway - x61y60z6" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y61z6.c",
  "south" : DIR+"/rooms/x61y59z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
