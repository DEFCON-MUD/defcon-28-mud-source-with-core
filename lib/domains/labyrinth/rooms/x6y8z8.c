inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 8, 8 }));
  set_short( "Passage - x6y8z8" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y8z8.c",
  "east" : DIR+"/rooms/x7y8z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
