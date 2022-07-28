inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 36, 9 }));
  set_short( "Corridor - x46y36z9" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y36z9.c",
  "east" : DIR+"/rooms/x47y36z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
