inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 52, 8 }));
  set_short( "Corridor - x3y52z8" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y52z8.c",
  "south" : DIR+"/rooms/x3y51z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
