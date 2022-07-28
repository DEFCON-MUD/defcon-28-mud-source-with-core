inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 62, 5 }));
  set_short( "Corridor - x48y62z5" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y62z5.c",
  "east" : DIR+"/rooms/x49y62z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
