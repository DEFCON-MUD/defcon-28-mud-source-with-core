inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 23, 8 }));
  set_short( "Corridor - x23y23z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y24z8.c",
  "south" : DIR+"/rooms/x23y22z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
