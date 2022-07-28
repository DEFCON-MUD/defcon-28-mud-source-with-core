inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 48, 4 }));
  set_short( "Passage - x20y48z4" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y48z4.c",
  "east" : DIR+"/rooms/x21y48z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
