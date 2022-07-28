inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 20, 9 }));
  set_short( "Passage - x13y20z9" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y21z9.c",
  "south" : DIR+"/rooms/x13y19z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
