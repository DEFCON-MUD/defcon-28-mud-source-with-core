inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 48, 5 }));
  set_short( "Passage - x39y48z5" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "south" : DIR+"/rooms/x39y47z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
