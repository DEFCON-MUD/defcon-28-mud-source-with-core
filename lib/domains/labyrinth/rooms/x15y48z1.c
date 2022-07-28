inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 48, 1 }));
  set_short( "Hallway - x15y48z1" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y48z1.c",
  "south" : DIR+"/rooms/x15y47z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
