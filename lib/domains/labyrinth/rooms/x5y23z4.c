inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 23, 4 }));
  set_short( "Passage - x5y23z4" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y24z4.c",
  "south" : DIR+"/rooms/x5y22z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
