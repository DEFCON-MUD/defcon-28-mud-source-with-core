inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 2, 7 }));
  set_short( "Hallway - x53y2z7" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y2z7.c",
  "east" : DIR+"/rooms/x54y2z7.c",
  "north" : DIR+"/rooms/x53y3z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
