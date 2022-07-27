inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 7, 4 }));
  set_short( "Passage - x49y7z4" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y8z4.c",
  "south" : DIR+"/rooms/x49y6z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
