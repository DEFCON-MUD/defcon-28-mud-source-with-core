inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 44, 8 }));
  set_short( "Passage - x16y44z8" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y44z8.c",
  "east" : DIR+"/rooms/x17y44z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
