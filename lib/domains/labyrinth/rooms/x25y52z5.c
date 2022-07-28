inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 52, 5 }));
  set_short( "Corridor - x25y52z5" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y52z5.c",
  "north" : DIR+"/rooms/x25y53z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
