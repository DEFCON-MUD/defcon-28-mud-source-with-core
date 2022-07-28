inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 24, 4 }));
  set_short( "Corridor - x3y24z4" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y24z4.c",
  "south" : DIR+"/rooms/x3y23z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
