inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 18, 4 }));
  set_short( "Corridor - x9y18z4" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y18z4.c",
  "south" : DIR+"/rooms/x9y17z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
