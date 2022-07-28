inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 61, 0 }));
  set_short( "Passage - x49y61z0" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y62z0.c",
  "south" : DIR+"/rooms/x49y60z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
