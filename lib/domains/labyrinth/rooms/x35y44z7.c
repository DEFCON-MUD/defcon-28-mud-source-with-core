inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 44, 7 }));
  set_short( "Corridor - x35y44z7" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y44z7.c",
  "south" : DIR+"/rooms/x35y43z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
