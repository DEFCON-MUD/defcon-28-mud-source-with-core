inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 17, 6 }));
  set_short( "Hallway - x37y17z6" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y18z6.c",
  "south" : DIR+"/rooms/x37y16z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
