inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 10, 6 }));
  set_short( "Corridor - x36y10z6" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y10z6.c",
  "east" : DIR+"/rooms/x37y10z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
