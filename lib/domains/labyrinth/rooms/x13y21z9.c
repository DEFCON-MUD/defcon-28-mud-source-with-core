inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 21, 9 }));
  set_short( "Corridor - x13y21z9" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y22z9.c",
  "south" : DIR+"/rooms/x13y20z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
