inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 23, 6 }));
  set_short( "Hallway - x15y23z6" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y24z6.c",
  "south" : DIR+"/rooms/x15y22z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
