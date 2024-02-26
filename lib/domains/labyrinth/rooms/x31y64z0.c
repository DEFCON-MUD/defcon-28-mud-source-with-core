inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 64, 0 }));
  set_short( "Hallway - x31y64z0" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y64z0.c",
  "east" : DIR+"/rooms/x32y64z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
