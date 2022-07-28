inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 48, 4 }));
  set_short( "Hallway - x31y48z4" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y48z4.c",
  "north" : DIR+"/rooms/x31y49z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
