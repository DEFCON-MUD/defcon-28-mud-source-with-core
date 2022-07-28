inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 13, 1 }));
  set_short( "Hallway - x47y13z1" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y14z1.c",
  "south" : DIR+"/rooms/x47y12z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
