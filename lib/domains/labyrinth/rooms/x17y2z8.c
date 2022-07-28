inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 2, 8 }));
  set_short( "Passage - x17y2z8" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y2z8.c",
  "north" : DIR+"/rooms/x17y3z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
