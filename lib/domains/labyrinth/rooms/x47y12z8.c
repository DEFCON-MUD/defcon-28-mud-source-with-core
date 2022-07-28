inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 12, 8 }));
  set_short( "Corridor - x47y12z8" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y12z8.c",
  "south" : DIR+"/rooms/x47y11z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
