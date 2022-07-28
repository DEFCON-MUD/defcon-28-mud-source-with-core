inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 61, 7 }));
  set_short( "Hallway - x31y61z7" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y62z7.c",
  "south" : DIR+"/rooms/x31y60z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
