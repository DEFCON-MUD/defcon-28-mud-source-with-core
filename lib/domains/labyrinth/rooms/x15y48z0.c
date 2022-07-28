inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 48, 0 }));
  set_short( "Corridor - x15y48z0" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y48z0.c",
  "north" : DIR+"/rooms/x15y49z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
