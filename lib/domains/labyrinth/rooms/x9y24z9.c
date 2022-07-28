inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 9 }));
  set_short( "Hallway - x9y24z9" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y24z9.c",
  "south" : DIR+"/rooms/x9y23z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
