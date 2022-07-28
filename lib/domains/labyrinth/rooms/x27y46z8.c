inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 46, 8 }));
  set_short( "Corridor - x27y46z8" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y46z8.c",
  "south" : DIR+"/rooms/x27y45z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
