inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 46, 9 }));
  set_short( "Hallway - x3y46z9" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y46z9.c",
  "north" : DIR+"/rooms/x3y47z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
