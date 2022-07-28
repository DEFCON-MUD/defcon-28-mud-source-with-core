inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 8, 5 }));
  set_short( "Passage - x16y8z5" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y8z5.c",
  "east" : DIR+"/rooms/x17y8z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
