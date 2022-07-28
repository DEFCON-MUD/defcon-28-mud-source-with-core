inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 49, 0 }));
  set_short( "Corridor - x47y49z0" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y50z0.c",
  "south" : DIR+"/rooms/x47y48z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
