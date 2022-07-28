inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 49, 4 }));
  set_short( "Corridor - x61y49z4" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y50z4.c",
  "south" : DIR+"/rooms/x61y48z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
