inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 43, 6 }));
  set_short( "Passage - x47y43z6" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y44z6.c",
  "south" : DIR+"/rooms/x47y42z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
