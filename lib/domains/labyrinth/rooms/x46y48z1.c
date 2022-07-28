inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 48, 1 }));
  set_short( "Passage - x46y48z1" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y48z1.c",
  "east" : DIR+"/rooms/x47y48z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
