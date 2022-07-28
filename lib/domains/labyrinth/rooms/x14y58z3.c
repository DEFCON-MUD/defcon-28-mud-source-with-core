inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 58, 3 }));
  set_short( "Passage - x14y58z3" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y58z3.c",
  "east" : DIR+"/rooms/x15y58z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
