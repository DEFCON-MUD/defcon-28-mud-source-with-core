inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 35, 8 }));
  set_short( "Passage - x3y35z8" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y36z8.c",
  "south" : DIR+"/rooms/x3y34z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
