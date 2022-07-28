inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 23, 4 }));
  set_short( "Passage - x33y23z4" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y24z4.c",
  "south" : DIR+"/rooms/x33y22z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
