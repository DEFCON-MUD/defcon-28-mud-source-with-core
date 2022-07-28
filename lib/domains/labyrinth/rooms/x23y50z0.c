inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 50, 0 }));
  set_short( "Hallway - x23y50z0" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y51z0.c",
  "south" : DIR+"/rooms/x23y49z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
