inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 20, 2 }));
  set_short( "Hallway - x17y20z2" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y20z2.c",
  "north" : DIR+"/rooms/x17y21z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
