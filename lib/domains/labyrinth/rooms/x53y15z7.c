inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 15, 7 }));
  set_short( "Hallway - x53y15z7" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y16z7.c",
  "south" : DIR+"/rooms/x53y14z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
