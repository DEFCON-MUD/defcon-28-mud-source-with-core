inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 23, 2 }));
  set_short( "Corridor - x9y23z2" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y24z2.c",
  "south" : DIR+"/rooms/x9y22z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
