inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 49, 6 }));
  set_short( "Hallway - x45y49z6" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y50z6.c",
  "south" : DIR+"/rooms/x45y48z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
