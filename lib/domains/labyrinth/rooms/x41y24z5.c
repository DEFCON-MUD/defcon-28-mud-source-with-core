inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 24, 5 }));
  set_short( "Passage - x41y24z5" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y25z5.c",
  "south" : DIR+"/rooms/x41y23z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
