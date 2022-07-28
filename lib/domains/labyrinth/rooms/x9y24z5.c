inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 5 }));
  set_short( "Corridor - x9y24z5" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y24z5.c",
  "north" : DIR+"/rooms/x9y25z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
