inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 5, 6 }));
  set_short( "Passage - x15y5z6" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y6z6.c",
  "south" : DIR+"/rooms/x15y4z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
